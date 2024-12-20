## align 4k

```c
/*
 * align the address to the border of page(4K)
 */
static inline ptr_t _align_page(ptr_t address)
{
	ptr_t order = (1 << PAGE_ORDER) - 1;
	return (address + order) & (~order);
}
```