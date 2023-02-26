#pragma once

//
// disk device definitions.
// custom interface for Viisi.
//

// disk mmio control registers, mapped starting at 0x10001000.
#define DISK_MMIO_MAGIC_VALUE 0x000 // 0x7669697369 ('viisi' in ASCII)
#define DISK_MMIO_NOTIFY 0x008 // -1 = idle
#define DISK_MMIO_DIRECTION 0x010 // 0 = read, 1 = write
#define DISK_MMIO_BUFFER_ADDRESS 0x018
#define DISK_MMIO_BUFFER_LENGTH 0x020
#define DISK_MMIO_SECTOR 0x028
#define DISK_MMIO_STATUS 0x030
