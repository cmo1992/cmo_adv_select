# Drupal Advanced Select

The Drupal 7 Module allows for a form to have a 
select option where each option has a max 
number of submissions.

=================================================

Objective:

The module is aimed for a class/session/training
signup form where there is a class offerend with
several section having a max number of seats.

=================================================

Use:

1. install and enable the module
2. Create a node for the signup form.
3. Add the form elements for there information.
4. Add a select option for the sessions.
4.1. The opions need to be formatted 
sessionid_maxSubmissions|Session Name Date Time
5. Go to the admin page to the module.
6. On a new line add the 
nodeID|Session Title|<Custom error message>
6.1 Custom error message - Optional it is the
error message that shows up when the selected
sessionss AJAX call comed back with a bad
selection.
7. Save