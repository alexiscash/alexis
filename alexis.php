<!-- i dont actually know php im just winging it -->

<?php
class Alexis {
  public $name; 
  public $swag;

  public function __construct() {
    $name = "alexis";
    $swag = "infinity";
    proclaimSwagness();
  }

  public function proclaimSwagness() {
    echo "swag on " + $this->swag
  }

}

$alexis = new Alexis();
?>