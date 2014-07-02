
 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /disparity_8x3_tb/status
      waveform add -signals /disparity_8x3_tb/disparity_8x3_synth_inst/bmg_port/CLKA
      waveform add -signals /disparity_8x3_tb/disparity_8x3_synth_inst/bmg_port/ADDRA
      waveform add -signals /disparity_8x3_tb/disparity_8x3_synth_inst/bmg_port/DINA
      waveform add -signals /disparity_8x3_tb/disparity_8x3_synth_inst/bmg_port/WEA
      waveform add -signals /disparity_8x3_tb/disparity_8x3_synth_inst/bmg_port/DOUTA
console submit -using simulator -wait no "run"
