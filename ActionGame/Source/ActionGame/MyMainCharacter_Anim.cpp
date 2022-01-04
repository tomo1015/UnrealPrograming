// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainCharacter_Anim.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MainCharacter.h"

//アニメーション初期化
void UMyMainCharacter_Anim::NativeInitializeAnimation()
{
	//キャラクターがなければ、クラスキャストで生成する
	if (MyChar == nullptr) 
	{
		MyChar = Cast<AMainCharacter>(TryGetPawnOwner());
	}
}

//アニメーションプロパティ更新
void UMyMainCharacter_Anim::UpdateAnimationProperties(float DeltaTime)
{
	//キャラクターがなければ、クラスキャストで生成する
	if (MyChar == nullptr) 
	{
		MyChar = Cast<AMainCharacter>(TryGetPawnOwner());
	}

	if (MyChar)
	{
		//3D空間なので変化量を取得
		FVector Velocity = MyChar->GetVelocity();
		Velocity.Z = 0;//Z方向は0とする
		Speed = Velocity.Size();//スピード値は変化サイズから

		//コンポーネントの落下状態かどうかで空中の判定をする
		bIsInAir = MyChar->GetMovementComponent()->IsFalling();

		//加速度が0以上ならば、加速フラグON
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