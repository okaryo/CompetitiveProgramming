a,b = gets.split.map(&:to_i)
0.upto(255) do |c|
  if a ^ c == b
    puts c
    exit 0
  end
end
