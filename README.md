## ExecutePeFromPngViaLNK

Extract and execute a PE embedded within a PNG file using an LNK file. The PE file is encrypted using a single-key XOR algorithm and then injected as an IDAT section to the end of a specified PNG file.

### Quick Links

[Maldev Academy Home](https://maldevacademy.com?ref=gh)
  
[Maldev Academy Syllabus](https://maldevacademy.com/syllabus?ref=gh)

[Maldev Academy Pricing](https://maldevacademy.com/pricing?ref=gh)

</br>

## Usage

1. Use `InsertPeIntoPng.py` to create the embedded PE PNG file and generate the extraction LNK file:

<p align="center">
<img width="1000px" alt="image" src="https://github.com/user-attachments/assets/fdf514e1-7396-47da-a36b-4f2f55c22498">
</p>

The generated LNK file will have the icon of a PDF file by default, and it will expect the embedded PNG file to be in the same directory when executed. PE files will be stored under the `%TEMPT` directory for execution.

<p align="center">
<img width="500px" alt="image" src="https://github.com/user-attachments/assets/a1c16d36-1622-431c-9926-8a14e6f577b4">
</p>


</br>

## Demo - Executing Dll

https://github.com/user-attachments/assets/adccab21-a05e-4f79-9590-b2ea4160ec4b

</br>

## Demo - Executing Exe

https://github.com/user-attachments/assets/d47a0f3d-1689-4c57-bb1f-7559ad23ce04

