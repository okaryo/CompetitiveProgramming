a= gets.split.map(&:to_i)
all_sum = a.sum
[0, 1].repeated_permutation(4) do |bits|
  sum = 0
  bits.each_with_index do |bit, index|
    if bit == 0
      sum += a[index]
    end
  end
  if sum == all_sum - sum
    puts 'Yes'
    exit 0
  end
end
puts 'No'
