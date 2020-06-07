class Alexis

  attr_accessor :alexis, :swag

  def initialize
    @alexis = "alexis"
    @swag = 1.0/0.0
    self.proclaim_swagness
  end

  def proclaim_swagness
    puts("swag on #{@swag}")
  end
end

alexis = Alexis.new
