// Fill out your copyright notice in the Description page of Project Settings.


#include "UIManagerSubsystem.h"

#include "GlobalEnum.h"
#include "SimpleWidget.h"

void UUIManagerSubsystem::PushUI(EUIType UIType)
{

}

void UUIManagerSubsystem::CloseUI(EUIType UIType)
{
	
}

void UUIManagerSubsystem::PopUI()
{
	if (RootUIStacks.Num() <= 0)
	{
		return; // 已经没有UI了
	}
}

