#define CONFIG_H

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_COL_PINS \
    { GP6, GP7, GP5 }
#define MATRIX_ROW_PINS \
    { GP10, GP11, GP12 }
#define DEBUG_MATRIX_SCAN_RATE
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5
