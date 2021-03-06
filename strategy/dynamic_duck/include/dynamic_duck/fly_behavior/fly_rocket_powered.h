//
// Created by cosge on 2021-02-09.
//

#ifndef STRATEGY_DYNAMIC_DUCK_FLY_BEHAVIOR_FLY_ROCKET_POWERED_H_
#define STRATEGY_DYNAMIC_DUCK_FLY_BEHAVIOR_FLY_ROCKET_POWERED_H_

#include "dynamic_duck/fly_behavior/fly_behavior.h"

namespace strategy {
namespace dynamic_duck{

class FlyRocketPowered : public FlyBehavior {
 public:
  void fly() const override;
};

} // namespace dynamic_duck
} // namespace strategy

#endif //STRATEGY_DYNAMIC_DUCK_FLY_BEHAVIOR_FLY_ROCKET_POWERED_H_
