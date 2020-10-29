#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include "spi_flash_sst25vfxx.h"
#include "dfs_fs.h"
#include "dfs_romfs.h"


//static const struct romfs_dirent _romfs_root[] = {
//    {ROMFS_DIRENT_DIR, "mnt", RT_NULL, 0},
//    {ROMFS_DIRENT_DIR, "user", RT_NULL, 0}
//};

//const struct romfs_dirent romfs_root = {
//    ROMFS_DIRENT_DIR, "/", (rt_uint8_t *)_romfs_root, sizeof(_romfs_root)/sizeof(_romfs_root[0])
//};

int main(void)
{
	
	sst25vfxx_init("sst25vfxx", "spi30");
	

	if (dfs_mount("sst25vfxx", "/", "rom", 0, &(romfs_root))==0 )
	{
			rt_kprintf("ROM file system initializated!\n");
	}
	else
	{
			rt_kprintf("ROM file system initializate failed!\n");
	}
	
	
		//dfs_mkfs("rom", "sst25vfxx");
}
