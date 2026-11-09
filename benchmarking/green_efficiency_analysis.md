Measurement Methodology: 
The program uses the clock() function to measure CPU time consumed during execution. The return value is stored using the clock_t data type. The return value is converted into seconds by dividing the difference between the end and the start clock values by CLOCK_PER_SEC.

Observed Performance Differences:
Building the database was slightly quicker than processing as shown by the results of the output. Reduce process was the quickest of all three. i

TOTAL seconds: 0.000759
BUILD_DATA seconds: 0.000301
PROCESS seconds: 0.000318
REDUCE seconds: 0.000135

Relation between Runtime and Energy Consumption: 
A program that takes longer to execute may consume more energy as it requires the CPU to remain active for longer.

Energy is expended through multiples processes 
1. Computation (CPU cycles)
2. Memory Usage (RAM)
3. Data Storage & Retrieval 
4. Network Activity
5. Infrastructure 

Longer runtime does not automatically equal higher energy consumption as different operations can require different amounts of CPU power

Limitations of the Experiment:
The clock() function measures CPU time rather than real-workd elapsed time. Does not represent how long a user might have waited for a program to finish. As well as utilising the function introduces a small amout of overhead as each phase requires a starting and ending timing call. 

Depending on the hardware can differ results therefore depending on which computer the program is executed on it may produce alternate results. A limited dataset size is another limitation of the experiment as a smaller or larger dataset may produce vastly different results. 

Finally energy consumption is not directly measured as we only recorded CPU execution time. As we discussed before runtime itself cannot be used to determine exact energy consumed by each phase. I ran the execution a single time but repeated executions are required to determine any variations in output and to get an overall average. 

Practical Engineering Takeaway: 
Performance measurement is important as measuring execution helps identify how long individual programs take. It provides evidence rather than relying on assumptions and it helps to break it down into different phases as it makes it easier to identify where processing time is spent. 

This experiment emphasised the importance of being efficient overall. Only utilising code that is required, minimising libraries, loading resources as required and efficient inputs and outputs. Reducing unnecessary calculations nd improving execution time may help reduce CPU workload and potentially lower energy comnsumption.

Finally, this experiment demonstrated the importance of controlled and repeatable testing. Consistency across datasets, compiler settings and measurement boundaries help produce performance comparisons. This practice is valuable in real-world applications as engineers must evaluate performance, identify bottlenecks and justify optimisation decisions using evidence they have collated. 
