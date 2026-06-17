# Seashell Speaker!

A bluetooth speaker that automatically plays when tilted, encased in a seashell case!

<img width="348" height="435" alt="image" src="https://github.com/user-attachments/assets/bc8299e1-5082-409b-a344-e2b940161c4b" />  <img width="317" height="436" alt="image" src="https://github.com/user-attachments/assets/173d4e93-a95f-4a23-a910-28eb1dd76e32" />

I came up wih this idea when I was thinking about how to expand my audio projects. This was created for hackclub's fallout program, and after first creating an mp3 player, I though the next step would be to make something that could use bluetooth, and then I took it to the next level by making it tilt activated! By coincidence, this is my second ocean-related project, lol. The design was inspired by the story we all know about hearing the ocean come from a shell, and partly inspired by the purple magic conch shell from spongebob, lol.

<img width="475" height="344" alt="image" src="https://github.com/user-attachments/assets/92466fe1-1c7a-4206-b0d3-392e97c61276" />


# Cad Screenshots

<table>
   <tr>
      <td>
   <img width="440" height="467" alt="image" src="https://github.com/user-attachments/assets/63dc20ee-ca95-40c3-a6ba-06fb988ac760" />
</td>
      <td>
   <img width="440" height="467" alt="image" src="https://github.com/user-attachments/assets/c09b8b6c-695b-4223-8e41-b4b74ac0a3c2" />
      </td>
   </tr>
</table>


<table>
  <tr>
    <td>
    <img src="https://github.com/user-attachments/assets/c4b0c352-6a4f-4c3a-8f44-03dc07fce032" width="300" height="300">
    </td>
    <td>
    <img src="https://github.com/user-attachments/assets/60ea2944-5caf-4ff7-953e-0cccb3af8535" width="300" height="300">
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/eadf4e3f-f29a-490b-a3f9-8014323255b9" width="300" height="300">
    </td>
  </tr>
</table>

Cad Notes:
- Okay, so CAD took a WHILE. Creating such an organic shape was difficult, so ended up relying on the revolve, sweep, and coil tools. Since there arent any tutorials online for creating this type of shell in Fusion either, I had to experiment with blender along with borrowing pieces of 3d models online. Once I had a shape i was happy with, I turned it into a case by splitting it in half, adding holes for magnets, and enclosure for the speaker standoffs for the pcb, and holes for the speaker wires.
- The case itself is pretty easy to use, and I'm happy with how it turned out. If I could go back and change anything, I'd definetly check before hand that my case and pcb were compatible. Orginally, I had planned to tuck my pcb away in the lip/opening of the shell. However, that would be pretty mush impossible without making a HUGE shell case, so I had to basically do a whole redesign of the pcb and case.

# PCB Screenshots

<table>
  <tr>
    <td>
    <img src="https://github.com/user-attachments/assets/7e3a6331-9cbc-4853-8e06-d04c9427673a" width="300">
    </td>
    <td>
    <img src="https://github.com/user-attachments/assets/0ae49389-2381-48d1-a7c3-7247d2f505bf" width="300">
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/788a1118-c266-4898-9ffe-395378e1f229" width="300">
    </td>
  </tr>
</table>

  PCB Notes:
   - For the PCB, I did have to go thorugh a few versions. I mostly focused on creating super compact board without hingering the esp32's antenna, which wasn't too bad. However, my first designs were too big too fit in the case, so I had to go back to the drawing board, where I decided to make a round pcb that would sit between the top and bottom halves of the shell.
   - This pcb includes a tilt sensor, charging module, switch, esp32, speaker output headers, and more (see bom)

# Schematic Screenshot
 
 <img width="857" height="600" alt="image" src="https://github.com/user-attachments/assets/c0a5363c-7b42-4c11-8c82-0a12092b6eb6" />

