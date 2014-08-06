#include <common.h>
#include <watchdog.h>
#include <command.h>
#include <image.h>
#include <malloc.h>
#include <zlib.h>
#include <bzlib.h>
#include <environment.h>
#include <asm/byteorder.h>
DECLARE_GLOBAL_DATA_PTR;
extern void FriendlyARMMenu(void);

int do_menu(cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	FriendlyARMMenu();
	return 0;
}


U_BOOT_CMD(
	menu,	1,		1,	do_menu,
	"menu    - show all the menu\n",
	"menu    - show all the menu\n"
);

