// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManager.h"

void UResourceManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// TODO: 加载总DataTable表，并加载其中的固定加载表
	MainDataTable = LoadObject<UDataTable>(this, *MainDataTablePath);
	if (MainDataTable)
	{
		UE_LOG(LogTemp, Log, TEXT("UResourceManager, 成功加载插件 DataTable"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UResourceManager, 加载插件 DataTable 失败！请检查路径是否正确"));
	}
}

void UResourceManager::Deinitialize()
{
	Super::Deinitialize();

	// TODO: 卸载总DataTable表
}