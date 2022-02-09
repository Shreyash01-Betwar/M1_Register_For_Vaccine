# 🧪Test Plan and Output: 

- The Overall Code is tested and some output has been generated.
- Through various breakpoints analysing the code.
- The following Outputs are figure out as per the requirements.
- There are two types of test plans. (High Level) and (Low Level)
- The final (Expected) and (Final) Outputs are figure out in the Project.


## 💢High Level Test Plan:

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 123 (aadhar no) | {-1} |  (not found) |
| 02 | Check patient registration status | 123 (aadhar no) | {0,1} |  (found) |
| 03 | Check patient vaccination status | 3 (patient id) | {>0} | (vaccinated) |


## 💢Low Level Test Plan:

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 125 (aadhar no) | 0 | 0 (registered, not vaccinated) |
| 02 | Check patient registration status | 130 (aadhar no) | 1 | 1 (registered, vaccinated) |
| 03 | Check patient vaccination status | 3 (patient id) | 1 | 1 (first dose) |
| 04 | Check patient vaccination status | 3 (patient id) | 2 | 2 (second dose) |
| 05 | Check patient vaccination status | 3 (patient id) | 3 | 3 (already vaccinated) |
