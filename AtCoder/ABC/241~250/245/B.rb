N = gets.to_i
A = gets.split.map(&:to_i)
0.upto(2000) do |i|
  unless A.include?(i)
    puts i
    exit 0
  end
end
