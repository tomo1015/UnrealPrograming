// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainCharacter_Anim.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MainCharacter.h"

//�A�j���[�V����������
void UMyMainCharacter_Anim::NativeInitializeAnimation()
{
	//�L�����N�^�[���Ȃ���΁A�N���X�L���X�g�Ő�������
	if (MyChar == nullptr) 
	{
		MyChar = Cast<AMainCharacter>(TryGetPawnOwner());
	}
}

//�A�j���[�V�����v���p�e�B�X�V
void UMyMainCharacter_Anim::UpdateAnimationProperties(float DeltaTime)
{
	//�L�����N�^�[���Ȃ���΁A�N���X�L���X�g�Ő�������
	if (MyChar == nullptr) 
	{
		MyChar = Cast<AMainCharacter>(TryGetPawnOwner());
	}

	if (MyChar)
	{
		//3D��ԂȂ̂ŕω��ʂ��擾
		FVector Velocity = MyChar->GetVelocity();
		Velocity.Z = 0;//Z������0�Ƃ���
		Speed = Velocity.Size();//�X�s�[�h�l�͕ω��T�C�Y����

		//�R���|�[�l���g�̗�����Ԃ��ǂ����ŋ󒆂̔��������
		bIsInAir = MyChar->GetMovementComponent()->IsFalling();

		//�����x��0�ȏ�Ȃ�΁A�����t���OON
		if (MyChar->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f) 
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}
	}
}