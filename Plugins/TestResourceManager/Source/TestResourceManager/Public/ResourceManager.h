// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ResourceManager.generated.h"

const FString MainDataTablePath = TEXT("/TestResourceManager/DataTables/MainDataTableConfig.MainDataTableConfig");

/**
 * 
 */
UCLASS()
class TESTRESOURCEMANAGER_API UResourceManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override { return true; }
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:
	UPROPERTY()
	UDataTable* MainDataTable;
};
