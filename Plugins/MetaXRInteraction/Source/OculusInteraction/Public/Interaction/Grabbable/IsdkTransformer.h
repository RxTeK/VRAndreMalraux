/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "CoreMinimal.h"
#include "IsdkITransformer.h"
#include "UObject/Object.h"
#include "IsdkTransformer.generated.h"

UCLASS(Abstract, EditInlineNew, DefaultToInstanced)
class OCULUSINTERACTION_API UIsdkTransformer : public UObject, public IIsdkITransformer
{
  GENERATED_BODY()

 public:
  UIsdkTransformer() {}

  // Initialize the transformation
  virtual void BeginTransform(
      const TArray<FIsdkGrabPose>& SelectPoses,
      const FIsdkTargetTransform& Target) override
      PURE_VIRTUAL(UIsdkTransformer::BeginTransform, ;);

  /**
   * Flush any local state and generate a final update to the target transform, for example
   * finishing some interpolation
   */
  virtual FTransform EndTransform(const FIsdkTargetTransform& Target) override
      PURE_VIRTUAL(UIsdkTransformer::EndTransform, return FTransform::Identity;);

  // Generate the transform update, the result should be a FTransform relative to the parent
  virtual FTransform UpdateTransform(
      const TArray<FIsdkGrabPose>& SelectPoses,
      const FIsdkTargetTransform& Target) override
      PURE_VIRTUAL(UIsdkTransformer::UpdateTransform, return FTransform::Identity;);

  // Meant to be used to generate constraints based on the state of the target at some point in time
  virtual void UpdateConstraints(const FIsdkTargetTransform& Target) override
      PURE_VIRTUAL(UIsdkTransformer::UpdateConstraints, ;);

  virtual bool IsTransformerActive() const override
      PURE_VIRTUAL(UIsdkTransformer::IsActive, return false;);

  // Max grab points or -1 if infinite
  virtual int MaxGrabPoints() const override
      PURE_VIRTUAL(UIsdkTransformer::MaxGrabPoints, return 0;);
};
