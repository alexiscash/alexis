<!-- i dont actually know php im just winging it -->

<?php
class Alexis {
  public $alexis;
  public $swag;

  public function __construct() {
    $alexis = "alexis";
    $swag = "infinity";
    proclaimSwagness();
  }

  public function proclaimSwagness() {
    echo "swag on " + $this->swag
  }

}

$alexis = new Alexis();
?>