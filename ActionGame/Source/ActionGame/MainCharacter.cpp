//=========================================================
//メインキャラクタークラス（プレイヤー）
//=========================================================

#include "MainCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"


const float CAMERA_ROTATION_PITCH = 550.f;

// Sets default values
//ゲーム開始前に呼び出す
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//カメラスプリングアーム作成(衝突時プレイヤー方向に引っ張る)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 500.f;//カメラブーム（スプリングアーム）の長さ
	CameraBoom->bUsePawnControlRotation = true;//コントローラに合わせてアームを回転する

	//カメラ作成
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;//カメラはコントローラに合わせて回転させない

	//コントローラーでカメラ移動時に、キャラクターがカメラと一緒に動かないように固定
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//キャラクターを左右にターンさせる
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, CAMERA_ROTATION_PITCH, 0.f);
}

// Called when the game starts or when spawned
//ゲームスタート時に呼び出す
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//フレーム更新
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
// 入力コンポーネントのバインド
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//コンポーネントチェック
	check(PlayerInputComponent);

	//前後移動の軸マッピング情報を取得
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	//左右移動の軸マッピング情報を取得
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
	//視点左右移動
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//視点上下移動
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

}

//前後移動
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

//左右移動
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