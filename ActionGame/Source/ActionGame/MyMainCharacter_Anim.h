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
	//アニメーション初期化
	virtual void NativeInitializeAnimation() override;

	//アニメーション更新
	UFUNCTION(BlueprintCallable, Category = Animation)
		void UpdateAnimationProperties(float DeltaTime);

	//スピード値
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
		float Speed;

	//加速するかどうか
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bIsAccelerating;

	//空中に浮いているかどうか
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		bool bIsInAir;

	//アニメーション対象キャラクター
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		class AMainCharacter* MyChar;
};
