#pragma once
#include <utility>
#include <vector>
#include <memory>
#include <cmath>
#include <gtest/gtest.h>

class Unit {
  friend ::testing::AssertionResult MaxHpCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult HpCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult MaxShieldCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult ShieldCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult ShieldRecoverCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult SelfHealingCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult AttackDamageCmp(int expected, Unit* unit);
  friend ::testing::AssertionResult IsDeadCmp(bool expected, Unit* unit);
  friend ::testing::AssertionResult ColorCmp(bool expected, Unit* unit);
 public:

  void Attack(std::shared_ptr<Unit>& attacked) const;
  void GetDamage(int damage);

  bool GetColor() const;
  int GetCurrentHP() const;
  int GetCurrentShield() const;
  virtual const std::vector<std::pair<int, int>>& GetPossibleMoves() = 0;
  virtual const std::vector<std::pair<int, int>>& GetPossibleDamaged() = 0;
  bool IsDead() const;

  void SetMaxHP(int max_hp);
  void SetHP(int hp);
  void SetMaxShield(int max_shield);
  void SetShield(int shield);
  void SetShieldRecoverSpeed(int shield_recover_speed);
  void SetSelfHealingSpeed(int self_healing_speed);
  void SetAttackDamage(int attack_damage);
  void SetColor(bool color);

  void GetHealing(int hp);
  void GetShield(int shield);
  void GetSelfHealing();
  void GetSelfShieldRecover();

 protected:

  int max_health_points_;
  int health_points_;
  int max_shield_;
  int shield_;
  int shield_recover_speed_;
  int self_healing_speed_;
  int attack_damage_;
  bool is_dead_ = false;
  bool color_; // 0 is white, 1 is black;
  static const std::vector<std::pair<int, int>> possible_moves_;
  static const std::vector<std::pair<int, int>> possible_damaged_;
};