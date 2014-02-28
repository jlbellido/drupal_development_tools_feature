drupal_development_tools_feature
================================
When you work in a Drupal new site, you usually have to sync your local DB with integration site when you start a new issue of your project.
You usually have to enable Devel, Coder modlues and all your devel module tools, set their configurations for work in your local enviroment each time you synchronize your local enviroment.
This makes you spend lot of time that you could use for other things. To solve this, drupal_development_tools_feature set a usual
configuration for Drupal developers that they could use in their daily work.

<h2> Instalation: </h2>
<ul>
  <li>Clone this repository into your features directory</li>
  <li>
    Enable it with drush or by admin/modules path:
    <code>drush en drupal_development_tools_feature</code>
  </li>
</ul>

<h2> Features: </h2>
<h3>Module dependencies:</h3>
<ul>
  <li>Devel https://drupal.org/project/devel</li>
  <li>Coder https://drupal.org/project/coder</li>
  <li>Features https://drupal.org/project/features</li>
  <li>Features Extra https://drupal.org/project/features_extra</li>
  <li>Strongarm : https://drupal.org/project/Strongarm</li>
  <li>CTools : https://drupal.org/project/ctools</li>
</ul>

<h3>Basic configurations</h3>
<h4>Devel:</h4>
<ul>
  <li>
    <b>Permisions</b>
    <ul>
      <li>Access developer information: Anonymoous, authenticated</li>
      <li>Execute PHP code: None</li>
      <li>Switch users: authenticated</li>
    </ul>
  </li>
  <li>
    <b>Settings set:</b>
    <ul>
      <li>Checked : Display redirection page</li>
      <li>Checked : Display machine names of permissions and modules</li>
      <li>Error handlers : Standard Drupal</li>
      <li>Krumo display: Default</li>
    </ul>
  </li>
</ul>

<h4>Coder:</h4>
<ul>
  <li>
    <b>Settings set:</b>
    <ul>
      <li>Checked : Drupal Coding Standards </li>
      <li>Checked : Drupal Commenting Standards</li>
      <li>Checked : Drupal SQL Standards</li>
      <li>Checked : Drupal Security Checks</li>
      <li>Checked : Internationalization</li>
      <li>Checked : Release standards</li>
      <li>Checked : include files (inc | php | install | test)</li>
    </ul>
  </li>
</ul>

<h3>Blocks:</h3>
<ul>
  <li>Switch user block (footer region)</li>
  <li>Development block (footer region)</li>
  <li>Execute PHP block (footer region)</li>
</ul>
