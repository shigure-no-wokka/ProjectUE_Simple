// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SimpleWidget.generated.h"

enum class EUIType : uint8;

/**
 * 
 */
UCLASS()
class TESTUIARCHITECT_API USimpleWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "UI Manager")
	EUIType GetUIType() const { return UIType; }
	
	UFUNCTION(BlueprintCallable, Category = "UI Manager")
	void ShowSelf(const bool bShow);

	// 关闭并销毁
	UFUNCTION(BlueprintCallable, Category = "UI Manager")
	void CloseSelf();
	
private:
	UPROPERTY()
	EUIType UIType;

	UPROPERTY()
	bool IsRootView = false;
};
