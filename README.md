# MonarchPesticides

### This is how I envision data collection. I'm totally flexible to change the way data is collected.


Getting started with data collection:
1. Copy this GitHub repository to your local computer.

2. Set up python data collection environment
* If you use Anaconda, you can install the required packages in the environment.yml file
  - ```conda update conda``` will make sure you have the most recent conda
  - In the terminal, nagivate to the folder called PythonCode
  - ```conda env create -f environment.yml```
  - This will create a new Python environment, called Photogate
  - ```conda activate Photogate``` activates the new python environment
  - ```python -m ipykernel install --user --name photogate``` will install a new kernel for the environment
  - ```conda deactivate``` will get you back to the original environment
* If you do not use Anaconda, note that this code has been tested with the following specs:
  - Python 3.7, matplotlib, numpy, pandas, scipy, ipykernel, pyserial, peakutils, seaborn
  
 3. In the terminal, type ```jupyter lab``` to open jupyter lab. 
 
  
For changes in Arduino code: 
1. Download and install Arduino IDE https://www.arduino.cc/en/main/software
