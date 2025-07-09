# Reverse Engineering

No resource on internet was helping me out. So I decided to create my resource myself.

Here I am learning practical reverse engineering by using basic C programs written by myself.

There are _ programs in total.

The idea is to compile them into an ELF and move backwards from the ELF binary.

All the variables are written in CAPS, suffixed with context and `_VAR`, for example, `COUNTER_VAR`, so that they can be easily identified in core dumps.

# Tools Of Trade

| Sr. | Tool | Description | Usage |
| --- | ---- | ----------- | ----- |
| 1.  | `file` | Used to check the type of a file | `file <file_path>` |
| 2.  | `objdump` | Disassembles and shows detailed structure | `<objdump file_path>` |
| 3.  | `readelf` | Shows ELF headers, sections, symbols      | `<readelf file_path>` |
| 4.  | `strings` | Prints human-readable strings in the file | `<strings file_path>` |