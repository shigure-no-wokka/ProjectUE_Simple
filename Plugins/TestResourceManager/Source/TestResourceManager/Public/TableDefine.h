// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TableDefine.generated.h"

// 总表结构（不要动这里）
USTRUCT(BlueprintType)
struct FMainDataTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
	FString TableName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
	FSoftObjectPath TablePath;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
	bool IsLoadedWithGame;
	
};

// ----- 在这里定义新的结构体

USTRUCT(BlueprintType)
struct FTestPicTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "TestPicTable")
	FString PicName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "TestPicTable")
	TSoftObjectPtr<UTexture2D> PicPath;
	
};

