
 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /template_8x9_tb/status
      waveform add -signals /template_8x9_tb/template_8x9_synth_inst/bmg_port/CLKA
      waveform add -signals /template_8x9_tb/template_8x9_synth_inst/bmg_port/ADDRA
      waveform add -signals /template_8x9_tb/template_8x9_synth_inst/bmg_port/DINA
      waveform add -signals /template_8x9_tb/template_8x9_synth_inst/bmg_port/WEA
      waveform add -signals /template_8x9_tb/template_8x9_synth_inst/bmg_port/ENA
      waveform add -signals /template_8x9_tb/template_8x9_synth_inst/bmg_port/DOUTA
console submit -using simulator -wait no "run"
