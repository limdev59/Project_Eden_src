#include "GameplayTags/GP_Tags.h"

namespace GPTags
{
    // [0] Game : 시련 진행 상태 및 흐름 제어
    namespace Game
    {
        namespace Stage
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Combat, "Game.Stage.Combat", "전투 진행 중");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cleared, "Game.Stage.Cleared", "시련 클리어됨");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Reward, "Game.Stage.Reward", "보상 선택 중");
        }
    }
    
    // [1] Ability : 어빌리티 실행 및 식별용 태그
    namespace Ability
    {
        namespace System
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(ActivateOnGiven, "Ability.System.ActivateOnGiven", "패시브용 어빌리티");
        }
        namespace Action
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Targeting, "Ability.Action.Targeting", "록온 동작");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Interact, "Ability.Action.Interact", "상호작용 동작");
        }
        namespace Movement
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Dash, "Ability.Movement.Dash", "대시 이동기");
        }
        namespace Skill
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Primary, "Ability.Skill.Primary", "평타");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Slot01, "Ability.Skill.Slot01", "스킬 슬롯 1");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Slot02, "Ability.Skill.Slot02", "스킬 슬롯 2");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ultimate, "Ability.Skill.Ultimate", "궁극기");
        }
        namespace Enemy
        {
            // 공격 계열
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Attack_Melee, "Ability.Enemy.Attack_Melee", "적 근접 공격");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Attack_Ranged, "Ability.Enemy.Attack_Ranged", "적 원거리 공격");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Attack_AoE, "Ability.Enemy.Attack_AoE", "적 광역 공격");
            
            // 유틸리티 및 특수 계열
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Utility_Dash, "Ability.Enemy.Utility_Dash", "적 이동/돌진기");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Utility_Summon, "Ability.Enemy.Utility_Summon", "적 쫄몹 소환");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Utility_Buff, "Ability.Enemy.Utility_Buff", "적 자가 버프");
            
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Death, "Ability.Enemy.Death", "적 사망 처리");
        }
    }
    
    // [2] Damage : 데미지 타입 및 원소 속성
    namespace Damage
    {
        namespace Type
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Physical, "Damage.Type.Physical", "물리 피해");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Magical, "Damage.Type.Magical", "마법 피해");
        }
        namespace Element
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Fire, "Damage.Element.Fire", "화염 속성 피해");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Water, "Damage.Element.Water", "물 속성 피해");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Lightning, "Damage.Element.Lightning", "전격 속성 피해");
        }
    }

    // [3] State : 캐릭터 상태, 버프, 디버프
    namespace State
    {
        namespace Status
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Fixed, "State.Status.Fixed", "이동 및 회전 불가 상태");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Unstoppable, "State.Status.Unstoppable", "저지 불가 (피격 경직 무시)");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Invincible, "State.Status.Invincible", "데미지 무적 상태");
            
            namespace Enemy
            {
                UE_DEFINE_GAMEPLAY_TAG_COMMENT(Aggroed, "State.Status.Enemy.Aggroed", "어그로 끌린 상태");
                UE_DEFINE_GAMEPLAY_TAG_COMMENT(Enraged, "State.Status.Enemy.Enraged", "광폭화 상태");
            }
        }
        namespace Movement
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sprinting, "State.Movement.Sprinting", "달리기 상태");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Dash, "State.Movement.Dash", "대쉬 상태");
        }
        namespace Buff
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shield, "State.Buff.Shield", "보호막 버프");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Haste, "State.Buff.Haste", "가속 버프 (이속/공속 증가)");
        }
        namespace Debuff
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Burn, "State.Debuff.Burn", "화상 디버프 (도트 뎀)");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Stun, "State.Debuff.Stun", "기절 디버프");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Slow, "State.Debuff.Slow", "둔화 디버프");
        }
    }

    // [4] Item : 유물 및 착용 장비 식별
    namespace Item
    {
        namespace Relic
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(BloodthirsterTest, "Item.Relic.BloodthirsterTest", "테스트용 피바라기 유물");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(WarmogArmorTest, "Item.Relic.WarmogArmorTest", "테스트용 워모그 유물");
        }
        namespace Weapon
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(MeleeTest, "Item.Weapon.MeleeTest", "검(근접) 착용 중");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(RangeTest, "Item.Weapon.RangeTest", "활(원거리) 착용 중");
        }
    }

    // [6] Event : 일회성 이벤트 트리거
    namespace Event
    {
        namespace Enemy
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(HitReact, "Event.Enemy.HitReact", "피격 리액션 이벤트");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(AttackHit, "Event.Enemy.AttackHit", "공격 타격 판정 프레임 이벤트");
        }
    }

    // [7] Cooldown : 쿨다운
    namespace Cooldown
    {
        namespace Skill
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(WaterPuddle, "Cooldown.Skill.WaterPuddle", "물웅덩이 스킬 쿨다운");
        }
    }
    
    // [8] AI : BT 연동 논리상태
    namespace AI
    {
        namespace State
        {
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Idle, "AI.State.Idle", "대기 중");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Patrol, "AI.State.Patrol", "정찰 중");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Chasing, "AI.State.Chasing", "추격 중");
            UE_DEFINE_GAMEPLAY_TAG_COMMENT(Combat, "AI.State.Combat", "교전 중");
        }
    }
}
