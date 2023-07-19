# mini-char  
A string compression algorithm written in c++!
## effectiveness
This algorithm is able to work by limiting the chars to only uppercase with limited symbols. this allow me to have each char only take up 5 bits instead of 8.
However, since memory is not addressable by bits, I need atleast 8 chars in order to compress because I can then compress into a 5 byte string. Following these 
restrictions, I can compress strings to about 5/8ths of their original memory footprint.
