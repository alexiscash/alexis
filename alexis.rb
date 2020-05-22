class Alexis

  attr_accessor :alexis, :swag

  def initialize
    @alexis = "alexis"
    @swag = "infinity"
  end
end

alexis = Alexis.new

puts("swag on #{alexis.swag}")