n = gets.to_i
1.upto(50) do |i|
  1.upto(50) do |j|
    if 3**i + 5**j == n
      puts "#{i} #{j}"
      exit 0
    end
  end
end
puts -1
