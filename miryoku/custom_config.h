// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
U_NP,       &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,             U_NP,\
U_NP,       &hm LCTRL A,       &hm LALT R,        &hm LGUI S,        &hm LSHFT T,       &kp G,             &kp M,             &hm LSHFT N,       &hm LGUI E,        &hm LALT I,        &hm LCTRL O,         U_NP,\
U_NP,       &lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,  U_NP,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
U_NP,       &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,             U_NP,\
U_NP,       &hm LGUI A,       &hm LALT R,        &hm LCTRL S,        &hm LSHFT T,       &kp G,             &kp M,             &hm LSHFT N,       &hm LCTRL E,        &hm LALT I,        &hm LGUI O,         U_NP,\
U_NP,       &lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,  U_NP,\
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp ESC,        &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &to U_BASE,       \
&kp TAB,        &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           &to U_EXTRA,      \
&kp LSHFT,      &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         U_NP,             \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_NUM,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_NP,       U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NP,\
U_NP,       &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NP,\
U_NP,       U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NP,\
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_NP,       &bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NP,\
U_NP,       &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         U_NP,\
U_NP,       U_NA,              &kp RALT,          &to U_NUM,         &to U_NAV,         U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           U_NP,\
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_NP,       &bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NP,\
U_NP,       &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NP,\
U_NP,       U_NA,              &kp RALT,          &to U_SYM,         &to U_MOUSE,       U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NP,\
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_NP,       &bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_tog,        &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        U_NP,\
U_NP,       &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_NP,\
U_NP,       U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       U_NP,\
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
U_NP,       &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       U_NP,\
U_NP,       &kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NP,\
U_NP,       &kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &to U_NUM,         &to U_NAV,         &kp RALT,          U_NA,              U_NP,\
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_NP,       &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       U_NP,\
U_NP,       &kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NP,\
U_NP,       &kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &to U_SYM,         &to U_MOUSE,       &kp RALT,          U_NA,              U_NP,\
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_NP,       &kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       U_NP,\
U_NP,       &kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NP,\
U_NP,       &kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &to U_FUN,         &to U_MEDIA,       &kp RALT,          U_NA,              U_NP,\
U_NP,              U_NP,              &kp K_APP,         &kp SPC,           &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
