AptProfilean
==========

A utility to profile dependency satisfaction in apt.


Some example use:

To simply see that it works and how it changes output use
apt-get install cheese | tee >(apt-profile > profiled_output) > apt_output


This of course looks complicated and does more than is needed.

To simply see a profile use
apt-get install cheese | apt-profile

Most likely you will want this logged so you can see or report the profile.
For this simply redirect the output to a file.
apt-get install cheese | apt-profile > output

Maybe you want to see it as it works.  You may want to see the profile or just the standard output.
For the profile use
apt-get install cheese | apt-profile | tee > output

To store the profile and see the regular output use
apt-get install cheese | tee >(apt-profile > output)

