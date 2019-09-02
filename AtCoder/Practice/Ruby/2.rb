n = gets.to_i
n.times do
  s = gets.chomp
  if s =~ /.*okyo.*ech.*/
    puts "Yes"
  else
    puts "No"
  end
end