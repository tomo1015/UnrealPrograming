//=========================================================
//���C���L�����N�^�[�N���X�i�v���C���[�j
//=========================================================

#include "MainCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"


const float CAMERA_ROTATION_PITCH = 550.f;

// Sets default values
//�Q�[���J�n�O�ɌĂяo��
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//�J�����X�v�����O�A�[���쐬(�Փˎ��v���C���[�����Ɉ�������)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 500.f;//�J�����u�[���i�X�v�����O�A�[���j�̒���
	CameraBoom->bUsePawnControlRotation = true;//�R���g���[���ɍ��킹�ăA�[������]����

	//�J�����쐬
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;//�J�����̓R���g���[���ɍ��킹�ĉ�]�����Ȃ�

	//�R���g���[���[�ŃJ�����ړ����ɁA�L�����N�^�[���J�����ƈꏏ�ɓ����Ȃ��悤�ɌŒ�
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//�L�����N�^�[�����E�Ƀ^�[��������
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, CAMERA_ROTATION_PITCH, 0.f);
}

// Called when the game starts or when spawned
//�Q�[���X�^�[�g���ɌĂяo��
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//�t���[���X�V
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
// ���̓R���|�[�l���g�̃o�C���h
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//�R���|�[�l���g�`�F�b�N
	check(PlayerInputComponent);

	//�O��ړ��̎��}�b�s���O�����擾
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	//���E�ړ��̎��}�b�s���O�����擾
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
	//���_���E�ړ�
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//���_�㉺�ړ�
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

}

//�O��ړ�
void AMainCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

//���E�ړ�
void AMainCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}