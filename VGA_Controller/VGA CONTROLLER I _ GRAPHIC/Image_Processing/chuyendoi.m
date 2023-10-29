close all;
clear all; % xoa cac de muc trong bo nho
clc;   % xoa cua so lenh

b = imread('kodim23.bmp'); % 24-bit BMP image RGB888, reads the image from the file specified by filename, inferring the format of the file from its contents 

k = 1;
for i = 512:-1:1  % image is written from the last row to the first row, i = 512 511 510 ... 3 2 1
for j = 1:768    % dimensions 1024 x 553, j = 1 2 3 4 ... 767 768
a(k) = b(i,j,1);
a(k+1) = b(i,j,2);
a(k+2) = b(i,j,3);
k = k + 3;
end
end
fid = fopen('kodim23.hex', 'wt'); % Open file, or obtain information about open files
fprintf(fid, '%x\n', a); % %x: [Base 16 (hexadecimal), lowercase letters a–f] [fprintf(fileID,formatSpec,A1,...,An) applies the formatSpec to all elements of arrays A1,...An in column order, and writes the data to a text file. fprintf uses the encoding scheme specified in the call to fopen]
disp('Text file write done'); disp(' ');
fclose(fid); % closes the specified file if it is open, returning 0 if successful and -1 if unsuccessful.
