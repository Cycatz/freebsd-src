#include <sys/terminal.h>

#include <dev/vt/vt.h>

struct vt_ime {

#define VT_IME_KEY RCTR /* right control key */
#define VT_IME_SOCK_PORT 2133
#define VT_IME_VALID_BOPOMOFO_CHARS \
	"abcdefghijklmnopqrstuvwxyz0123456789 ,.;-=/"
#define VT_IME_MAX_MESSAGE_LEN 1024
#define VT_IME_STATUS_BAR_HEIGHT 1

	int vt_ime_state; /* IME state */
};

int vt_ime_toggle_mode(struct vt_ime *vi);
int vt_ime_is_enabled(struct vt_ime *vi);
int vt_ime_process_char(struct terminal *terminal, struct vt_device *vd,
    struct vt_ime *vi, int ch);
void vt_ime_draw_status_bar(struct vt_device *vd, char *status);
