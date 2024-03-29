#include <headers/Unit.h>

void Unit::Attack(std::shared_ptr<Unit>& attacked) const {
  attacked->GetDamage(attack_damage_);
}

void Unit::GetDamage(int damage) {
  if (is_dead_) {
    return;
  }
  if (shield_ >= damage) {
    shield_ -= damage;
  } else if (shield_ + health_points_ > damage) {
    health_points_ -= damage - shield_;
    shield_ = 0;
  } else {
    is_dead_ = true;
  }
}

bool Unit::GetColor() const {
  return color_;
}

int Unit::GetCurrentHP() const {
  return health_points_;
}

int Unit::GetCurrentShield() const {
  return shield_;
}

const std::vector<std::pair<int, int>>& Unit::GetPossibleMoves() {
  return possible_moves_;
}

const std::vector<std::pair<int, int>>& Unit::GetPossibleDamaged() {
  return possible_damaged_;
}

bool Unit::IsDead() const {
  return is_dead_;
}

void Unit::SetMaxHP(int max_hp) {
  max_health_points_ = max_hp;
}

void Unit::SetHP(int hp) {
  health_points_ = hp;
}

void Unit::SetMaxShield(int max_shield) {
  max_shield_ = max_shield;
}

void Unit::SetShield(int shield) {
  shield_ = shield;
}

void Unit::SetShieldRecoverSpeed(int shield_recover_speed) {
  shield_recover_speed_ = shield_recover_speed;
}

void Unit::SetSelfHealingSpeed(int self_healing_speed) {
  self_healing_speed_ = self_healing_speed;
}

void Unit::SetAttackDamage(int attack_damage) {
  attack_damage_ = attack_damage;
}

void Unit::SetColor(bool color) {
  color_ = color;
}

void Unit::GetSelfHealing() {
  health_points_ = std::min(health_points_ + self_healing_speed_,
      max_health_points_);
}

void Unit::GetSelfShieldRecover() {
  shield_ = std::min(shield_ + shield_recover_speed_, max_shield_);
}

void Unit::GetHealing(int hp) {
  health_points_ = std::min(health_points_ + hp, max_health_points_);
}

void Unit::GetShield(int shield) {
  shield_ = std::min(shield_ + shield, max_shield_);
}

const std::vector<std::pair<int, int>> Unit::possible_moves_ = {};
const std::vector<std::pair<int, int>> Unit::possible_damaged_ = {};