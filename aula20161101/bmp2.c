#include<stdio.h>
#include<math.h>//floor
struct Pixel
{
    unsigned char r;//byte
    unsigned char g;
    unsigned char b;
};
int main()
{
    struct Pixel pixel, pixel2;
    int WPX,HPX,BPP,NCP,NIC,PAL;
    unsigned char byte;
    unsigned short word;// 2 bytes
    unsigned int dword;
    int offseat,i;//4 bytes
    FILE * imagem,*imagem2;
    imagem=fopen("sapo.bmp","r");
   imagem2=fopen("sapo2.bmp","w");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte,sizeof(byte),1,imagem);
    //fwrite(&byte,1,sizeof(byte),imagem2);
    printf("%c",byte);
    fread(&byte,sizeof(byte),1,imagem);
    //fwrite(&byte,1,sizeof(byte),imagem2);
    printf("%c\n",byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("tamanho do arquivo em bytes: %u\n",dword);
    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
      fread(&dword,sizeof(dword),1,imagem);
      //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("informacao reservada: %08X\n",dword);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("offseat: %u\n",dword);
    offseat=dword;
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("tamanho do cabeçalho: %u\n",dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("largura imagem em pixels: %u\n",dword);
    WPX=dword;
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("altura da imagem: %u\n",dword);
    HPX=dword;
    //word	26-27	Qtde de planos de cores
    fread(&word,sizeof(word),1,imagem);
    //fwrite(&word,1,sizeof(word),imagem2);
    printf("quantidade de planos de cores: %u\n",word);
    //word	28-29	Bits por pixel, BPP
    fread(&word,sizeof(word),1,imagem);
   //fwrite(&word,1,sizeof(word),imagem2);
    printf("bits por pixel: %u\n",word);
    BPP=word;
    //dword	30-33	Método de compressão
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("metodo de compressao: %u\n",dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("tamanho da imagem: %u\n",dword);
    //dword	38-41	Resolução horizontal
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("resolucao horizontal: %u\n",dword);
    //dword	42-45	Resolução vertical
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    printf("resolucao vertical: %u\n",dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    NCP = (dword == 0) ? 1 << BPP : dword;
    printf("numero de cores: %u\n",NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword,sizeof(dword),1,imagem);
    //fwrite(&dword,1,sizeof(dword),imagem2);
    NIC = (dword == 0) ? NCP : dword;
    printf("numero de cores importantes: %u\n",NIC);
    //tamanho da linha
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("tamanho da linha: %u\n",PAL);
    imagem2=fopen("sapo2","w");
    rewind(imagem);
    for(i=0;i<offseat;i++)
    {
        fread(&byte,sizeof(byte),1,imagem);
        fwrite(&byte,1,sizeof(byte),imagem2);
    }
    //leitura dos pixels
    printf("pixels\n=========================\n");
    int lap = 0;
    while (!feof(imagem))
        {
    if(fread(&pixel,sizeof(pixel),1,imagem))
    {
        pixel2.r=pixel.g;
        pixel2.g=pixel.r;
        pixel2.b=pixel.b;
    }
    lap = lap + 3;
    if ((lap + 3) > PAL)
    {
        fseek(imagem,(PAL-lap),SEEK_CUR);
        lap =0;
    }
    //fwrite(&pixel.r,1,sizeof(pixel),imagem2);
    //fwrite(&pixel.g,1,sizeof(pixel),imagem2);
    //fwrite(&pixel.b,1,sizeof(pixel),imagem2);
}
    fclose(imagem);
    fclose(imagem2);

    return 0;
}
