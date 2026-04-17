// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "ReponseWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable)
class VRANDREMALRAUX_API UReponseWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Content")
	FText GetText() const;

	UFUNCTION(BlueprintCallable, Category="Content")
	virtual void SetText(FText InText);

	virtual void SynchronizeProperties() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter="GetText", Setter="SetText", BlueprintGetter="GetText", BlueprintSetter="SetText", Category="Content", meta=(MultiLine="true", ExposeOnSpawn="true"))
	FText Text;

protected:
	UFUNCTION(BlueprintImplementableEvent, Category="Content")
	void ApplyTextToChildren(const FText& InText);

	UPROPERTY()
	FGetText TextDelegate;

	PROPERTY_BINDING_IMPLEMENTATION(FText, Text);
};
