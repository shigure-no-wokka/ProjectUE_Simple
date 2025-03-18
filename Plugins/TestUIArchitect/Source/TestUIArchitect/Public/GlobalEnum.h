#pragma once

#include "CoreMinimal.h"
#include "GlobalEnum.generated.h"

UENUM(BlueprintType)
enum class EUIType : uint8
{
	None = 0 UMETA(DisplayName = "无"),
	
	ELobbyMainView = 1 UMETA(DisplayName = "大厅界面"),
	EHUDMainView = 2 UMETA(DisplayName = "HUD界面"),
	
	EPlayerProfileMainView = 3 UMETA(DisplayName = "个人界面"),
};



