// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleWidget.h"
#include "GlobalEnum.h"


void USimpleWidget::ShowSelf(const bool bShow)
{
	SetVisibility(bShow? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
}

void USimpleWidget::CloseSelf()
{
	return;
}
