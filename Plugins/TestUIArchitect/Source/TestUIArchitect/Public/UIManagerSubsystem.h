// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIManagerSubsystem.generated.h"

enum class EUIType : uint8;
class USimpleWidget;

/**
 * 
 */
UCLASS()
class TESTUIARCHITECT_API UUIManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// 根据枚举值创建相关界面
	UFUNCTION(BlueprintCallable, Category = "UI Sybsystem")
	void PushUI(EUIType UIType);

	// 根据枚举值关闭界面
	UFUNCTION(BlueprintCallable, Category = "UI Sybsystem")
	void CloseUI(EUIType UIType);
	
	// 弹出最上层
	UFUNCTION(BlueprintCallable, Category = "UI Sybsystem")
	void PopUI();
	
private:

	// 根界面栈（入栈历史记录）
	UPROPERTY()
	TArray<TWeakObjectPtr<USimpleWidget>> RootUIStacks;
	
	// 根界面表（快速获取）
	UPROPERTY()
	TMap<EUIType, TObjectPtr<USimpleWidget>> UIMaps;
};
