#pragma once
#include "CoreMinimal.h"
#include "EMenuKeyboardButtonTextureIndex.generated.h"

UENUM(BlueprintType)
enum class EMenuKeyboardButtonTextureIndex : uint8 {
    L1_Q_A,
    R1_E_E,
    L2_Q_A,
    R2_E_E,
    FaceUp_T_T,
    FaceRight_C_C,
    FaceDown_Space_Space,
    FaceLeft_F_F,
    LStick_WASD_ZQSD,
    LStickUpDown_WS_ZS,
    LStickLeftRight_AD_QD,
    LStickButton_H_H,
    LStickUp_W_Z,
    LStickRight_D_D,
    LStickDown_S_S,
    LStickLeft_A_Z,
    RStick_IJKL_IJKL,
    RStickUpDown_IK_IK,
    RStickLeftRight_JL_JL,
    RStickButton_N_N,
    RStickUp_I_I,
    RStickRight_L_L,
    RStickDown_K_K,
    RStickLeft_J_J,
    LStickRoll_WASD_ZQSD,
    RStickRoll_IJKL_IJKL,
    Empty_26,
    Empty_27,
    Empty_28,
    Empty_29,
    Empty_30,
    Special_Tab_Tab,
};

