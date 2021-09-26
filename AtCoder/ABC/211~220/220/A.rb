A,B,C = gets.split.map(&:to_i)
A.upto(B) do |i|
  if i % C == 0
    puts i
    exit 0
  end
end
puts -1
