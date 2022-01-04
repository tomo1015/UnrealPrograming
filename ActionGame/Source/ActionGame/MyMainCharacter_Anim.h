// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyMainCharacter_Anim.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONGAME_API UMyMainCharacter_Anim : public UAnimInstance
{
	GENERATED_BODY()

public:
	//�A�j���[�V����������
	virtual void NativeInitializeAnimation() override;

	//�A�j���[�V�����X�V
	UFUNCTION(BlueprintCallable, Category = Animation)
		void UpdateAnimationProperties(float DeltaTime);

	//�X�s�[�h�l
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
		float Speed;

	//�������邩�ǂ���
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bIsAccelerating;

	//�󒆂ɕ����Ă��邩�ǂ���
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bIsInAir;

	//�A�j���[�V�����ΏۃL�����N�^�[
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		class AMainCharacter* MyChar;
};
