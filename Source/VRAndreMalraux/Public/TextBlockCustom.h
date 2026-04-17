// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "TextBlockCustom.generated.h"

/**
 * 
 */
UCLASS()
class VRANDREMALRAUX_API UTextBlockCustom : public UTextBlock
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category="Widget")
	FText GetBindableText() const;

	UFUNCTION(BlueprintCallable, Category="Widget")
	void SetBindableText(FText InText);

	virtual void SetText(FText InText) override;

protected:
	virtual TAttribute<FText> GetDisplayText() override;

public:
	// Bindable replacement for the inherited Text property, with expose-on-spawn support.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter="GetBindableText", Setter="SetBindableText", BlueprintGetter="GetBindableText", BlueprintSetter="SetBindableText", Category="Content", meta=(MultiLine="true", ExposeOnSpawn="true", DisplayName="Text"))
	FText BindableText;

	/** A bindable delegate to allow logic to drive the text of this widget in UMG. */
	UPROPERTY()
	FGetText BindableTextDelegate;

#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif

protected:
	PROPERTY_BINDING_IMPLEMENTATION(FText, BindableText);
};



