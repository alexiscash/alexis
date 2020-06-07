class Alexis

  attr_accessor :alexis, :swag

  def initialize
    @alexis = "alexis"
    @swag = 1.0/0.0
  end

  def proclaim_swagness
    puts("swag on #{@swag}")
  end
end

alexis = Alexis.new

alexis.proclaim_swagness