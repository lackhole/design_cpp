//
// Created by cosge on 2021-02-09.
//

#ifndef STRATEGY_DYNAMIC_DUCK_QUACK_BEHAVIOR_QUACK_H_
#define STRATEGY_DYNAMIC_DUCK_QUACK_BEHAVIOR_QUACK_H_

#include "dynamic_duck/quack_behavior/quack_behavior.h"

namespace strategy {
namespace dynamic_duck{

class Quack : public QuackBehavior {
 public:
  void quack() const override;
};

} // namespace dynamic_duck
} // namespace strategy

#endif //STRATEGY_DYNAMIC_DUCK_QUACK_BEHAVIOR_QUACK_H_
